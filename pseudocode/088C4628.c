/* Entry 0x088C4628 | file offset 0x000C1600 | FUN_088c4628 | bytes 88 */

bool FUN_088c4628(int *param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_088f2bec(DAT_089d712c + 0x1e208);
  *param_1 = iVar1;
  iVar2 = *param_3;
  param_1[1] = iVar2;
  return iVar2 <= iVar1;
}

