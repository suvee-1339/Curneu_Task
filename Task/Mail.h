	FILE* locBit;
	FILE* locBit1;
	FILE* locBit2;
	FILE* locBit3;
	FILE* locBit4;
	FILE* MainCRET;
void Init(void)
{
	locBit = fopen("GmailUR.txt","w");
	locBit1 =fopen("Mail.txt","w");
	locBit2 =fopen("Message.txt","w");
	locBit3 =fopen("PassUR.txt","w");
	locBit4 =fopen("Subject.txt","w");	
	MainCRET=fopen("Mail.aysoat","w");
	printf("\n\nInitiating please wait\n");
	fprintf(MainCRET,"import smtplib\nurm=open('GmailUR.txt','r')\nurp=open('PassUR.txt','r')\nsocmail = urm.read()\npassword = urp.read()\nsub = open('Subject.txt','r')\nsubject = sub.read()\nsandesh = open('Message.txt','r')\nsmessage = sandesh.read()\nmailid = open('Mail.txt','r')\nj = mailid.readline()\nEmail=j.split()\ns = smtplib.SMTP('smtp.gmail.com', 587)\ns.starttls()\ns.login(socmail, password)\nbody = ''\nding = 'Subject:{}{}'.format(subject, body)\nmessage = ding+smessage\n#print('Message Sent to',Email)\ns.sendmail(socmail, Email, smessage)\nprint('Done')\n\n");
	fclose(MainCRET);
//	return 0;
}

int SendMail(int returnVal)
{
system("python Mail.aysoat");
switch(returnVal)
{
case 0:
return 0;
break;
case -1:
return -1;
break;
default:
return 0;
break;	  	  	
}
system("attrib -h -s Mail.aysoat");
}
