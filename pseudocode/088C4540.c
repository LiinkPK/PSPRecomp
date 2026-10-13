/* Entry 0x088C4540 | file offset 0x000C1518 | FUN_088c4540 | bytes 88 */

bool FUN_088c4540(int *param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_088f2bd4(DAT_089d712c + 0x1e208);
  *param_1 = iVar1;
  iVar2 = *param_3;
  param_1[1] = iVar2;
  return iVar2 <= iVar1;
}

