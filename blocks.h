//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
        {" ", "df -h | grep \"/$\" | awk '{ print $4 \" \" }'", 60, 0},

        {" ", "battery_status BAT0", 5, 0},
        {" ", "battery_status BAT1", 5, 0},

        {" ", "network_status wlp3s0", 5, 0},

        {"  ", "cat /tmp/temper.deg 2>/dev/null || echo -n \"  \"", 60, 0},

        {" ", "mail_notify", 0, 1},

        {" ", "date '+%Y-%m-%d %H:%M'", 1, 0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = '|';
