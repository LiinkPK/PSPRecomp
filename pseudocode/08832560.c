/* Entry 0x08832560 | file offset 0x0002F538 | FUN_08832560 | bytes 112 */

bool FUN_08832560(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
                 undefined4 param_5)

{
  bool bVar1;
  
  bVar1 = *(float *)(param_4 + 0x3c0) <= 2.0;
  if (bVar1) {
    FUN_0883241c(param_1,param_2,param_3,param_4,param_5,0);
  }
  return bVar1;
}

