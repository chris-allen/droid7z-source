/**
 * Copyright (C) 2011, SNDA
 * Main activity
 * @author: tangyaguang@snda.com
 * @date: 2011-08-14
 */

package com.snda.Andro7z;

import android.app.Activity;
import android.os.Bundle;

public class Andro7zActivity extends Activity {
    /** Called when the activity is first created. */
    @Override
    public void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.main);
        Andro7za a7z = new Andro7za();
        a7z.printUsage();
    }
}