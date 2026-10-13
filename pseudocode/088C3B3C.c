/* Entry 0x088C3B3C | file offset 0x000C0B14 | FUN_088c3b3c | bytes 108 */

undefined4 FUN_088c3b3c(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_088b9004(param_2 + 0xe788,*param_3);
  param_1[1] = 1;
  if ((iVar1 == 0) || ((*(byte *)(iVar1 + 3) & 0x40) == 0)) {
    *param_1 = 0;
    uVar2 = 0;
  }
  else {
    *param_1 = 1;
    uVar2 = 1;
  }
  return uVar2;
}

