


/*	LOGNOTIFY VERSION	*/
#define VERSION		"v0.0"



/*	PROTOTYPES		*/
int	daemon_main( void );			/*	daemon.c		*/
int	xc_init( void );			/*	xclient.c		*/
int	draw_on_screen( char *content );	/*	xclient.c		*/
void	handle_x_events( void );		/*	xclient.c		*/
int	watch_files( const char *files[] );	/*	inotify.c		*/



/*	LOG FILE HANDLING	*/
struct	logfile
{
	int	wd;				/*	watch descriptor	*/
	size_t	size;				/*	last known size		*/
	char	name[256];			/*	name of log file	*/

};
