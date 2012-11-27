package org.hearingthevoice.innerlife;

import android.app.NotificationManager;
import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.support.v4.app.NotificationCompat;

public class AlarmReceiver extends BroadcastReceiver
{
	// This function is called when an alarm is received
	@Override
	public void onReceive(Context context, Intent intent)
	{
		NotificationManager nm;
		nm = (NotificationManager) context.getSystemService(Context.NOTIFICATION_SERVICE);
		NotificationCompat.Builder nb = new NotificationCompat.Builder(context);
		nb.setContentInfo("Hello");
		nb.setContentText("Hello");
		nb.setContentTitle("Hello");
		nb.setSmallIcon(R.drawable.ic_action_search);
		nm.notify(0, nb.build());
	}
}