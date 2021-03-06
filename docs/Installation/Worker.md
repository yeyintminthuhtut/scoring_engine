## Ubuntu 16.04
[Not have a scoring_engine python environment setup?](SetupEnvironment.md)  

### Modify hostname
`hostname <INSERT CUSTOM HOSTNAME HERE>`  

### Setup worker service (run as root)
`cp /home/engine/scoring_engine/src/configs/worker.service /etc/systemd/system/scoring_engine-worker.service`  

### Modify configuration
Change REDIS host/port/password fields to main engine host  
`vi /home/engine/scoring_engine/src/engine.conf`  

### Start worker service (must run as root)
`systemctl enable scoring_engine-worker`  
`systemctl start scoring_engine-worker`  

### Monitor worker
`journalctl -f _SYSTEMD_UNIT=scoring_engine-worker.service`  
`tail -f /var/log/scoring_engine/worker.log`  

### Install dependencies for DNS check
`apt-get install -y dnsutils`  

### Install dependencies for HTTP/HTTPS/FTPUpload/FTPDownload check
`apt-get install -y curl`  

### Install dependencies for most of the checks
`apt-get install -y medusa`  

### Install dependencies for SSH check
`apt-get install -y sshpass`  

### Install dependencies for SMTP/SMTPS check
`cp /home/engine/scoring_engine/src/scoring_engine/engine/checks/bin/smtp_check /usr/bin/smtp_check`  
`cp /home/engine/scoring_engine/src/scoring_engine/engine/checks/bin/smtps_check /usr/bin/smtps_check`  
`chmod a+x /usr/bin/smtp_check`  
`chmod a+x /usr/bin/smtps_check`  