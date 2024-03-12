program Timer;
uses crt, SysUtils, DateUtils;

var
	TimerLength: Integer;
	StartTime, EndTime: TDateTime;
	RemainingTime: Integer;
	ElapsedTime: TTime;

begin
	Writeln('Enter the length of the timer in seconds:');
	Readln(TimerLength);

	Writeln('Timer started...');
	StartTime := Now;
	EndTime := IncSecond(StartTime, TimerLength);

	while Now < EndTime do
	begin
		RemainingTime := SecondsBetween(EndTime, Now);
		Writeln('Remaining time: ', RemainingTime, ' seconds');
		Delay(1000); // Delay 1 second
	end;

	Writeln('Timer ended.');
	ElapsedTime := EndTime - StartTime;
	Writeln('Elapsed time: ', FormatDateTime('hh:nn:ss', ElapsedTime));
end.
	Writeln('Timer ended.');
	Writeln('Elapsed time: ', FormatDateTime('hh:nn:ss', ElapsedTime));
end.
