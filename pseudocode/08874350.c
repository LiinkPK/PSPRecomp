/* Entry 0x08874350 | file offset 0x00071328 | FUN_08874350 | bytes 432 */

void FUN_08874350(undefined4 param_1,undefined4 *param_2,uint param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  if (param_3 < 5) {
    if (param_3 == 1) {
      FUN_08873c20(0,param_2,0,0,0);
      FUN_08873c20(param_1,param_2,1,param_4,param_5);
    }
    else if (param_3 == 2) {
      FUN_08873c20(0,param_2,3,0,0);
      FUN_08873c20(param_1,param_2,2,param_4,param_5);
    }
    else if (param_3 == 3) {
      FUN_08873c20(0,param_2,2,0,0);
      FUN_08873c20(param_1,param_2,3,param_4,param_5);
    }
    else if (param_3 == 4) {
      local_30 = *param_2;
      local_2c = param_2[1];
      local_28 = param_2[2];
      local_24 = param_2[3];
      FUN_08873b64(0,param_2,&local_30,0,0);
      local_24 = 0;
      FUN_08873b64(param_1,param_2,&local_30,param_4,param_5);
    }
    else {
      FUN_08873c20(0,param_2,1,0,0);
      FUN_08873c20(param_1,param_2,0,param_4,param_5);
    }
  }
  return;
}

