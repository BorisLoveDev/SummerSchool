static ssize_t Read(struct file *filp, char *buffer, 
 												size_t length,
										 		loff_t * offset)
{
 int bytes_read = 0;

 if (*msg_Ptr == 0)
 	return 0;
 
 while (length && *msg_Ptr) {

 Write(*(msg_Ptr++), buffer++);
 length--;
 bytes_read++;
 
 }

 return bytes_read;
}