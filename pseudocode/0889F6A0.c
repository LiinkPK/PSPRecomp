/* Entry 0x0889F6A0 | file offset 0x0009C678 | FUN_0889f6a0 | bytes 100 */

undefined4 FUN_0889f6a0(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (*param_1 == -1) {
    *param_1 = param_2;
    uVar1 = FUN_088a1380(DAT_089d6c88,param_2,param_3,param_4,0);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

