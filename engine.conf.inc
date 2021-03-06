[GENERAL]
checks_location = scoring_engine.engine.checks
check_timeout = 30
checks = ICMP,SSH,DNS,FTPDownload,FTPUpload,FTP,FTPS,HTTP,HTTPS,MYSQL,POSTGRESQL,POP3,POP3S,IMAP,IMAPS,SMTP,SMTPS,VNC
timezone = US/Eastern

[WEB]
about_us_page_content = Insert content here about the competition and whatnot.<br>It can be html format, but has to be compacted into one line

[DB]
# SQLite
uri = sqlite:////tmp/engine.db
# MySQL
#uri = mysql://user:password@host/database
# Postgresql
#uri = postgresql://user:password@host/database

[REDIS]
host = 127.0.0.1
port = 6379
password =

[SPONSORSHIPS]
levels=diamond,platinum,somecustomlevel,gold
diamond=images/logo-placeholder.jpg,images/logo-placeholder.jpg,images/logo-placeholder.jpg
platinum=images/logo-placeholder.jpg,images/logo-placeholder.jpg,images/logo-placeholder.jpg
gold=images/logo-placeholder.jpg,images/logo-placeholder.jpg,images/logo-placeholder.jpg
somecustomlevel=images/logo-placeholder.jpg,images/logo-placeholder.jpg,images/logo-placeholder.jpg,images/logo-placeholder.jpg,images/logo-placeholder.jpg,images/logo-placeholder.jpg
