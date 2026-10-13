/* Entry 0x088C365C | file offset 0x000C0634 | FUN_088c365c | bytes 184 */

undefined4 FUN_088c365c(undefined4 *param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  
  param_1[1] = 1;
  iVar2 = 0;
  do {
    iVar1 = FUN_088cb164(param_2,(int)(char)(&DAT_089cbb7a)[iVar2]);
    iVar1 = FUN_088b8414(iVar1 + 0x10,*param_3,1);
    if (iVar1 != 0) {
      *param_1 = 1;
      return 1;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x1f);
  *param_1 = 0;
  return 0;
}

