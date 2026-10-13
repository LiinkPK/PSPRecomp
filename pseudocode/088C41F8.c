/* Entry 0x088C41F8 | file offset 0x000C11D0 | FUN_088c41f8 | bytes 88 */

bool FUN_088c41f8(int *param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_08920544(DAT_089d712c + 0x3f548);
  *param_1 = iVar1;
  iVar2 = *param_3;
  param_1[1] = iVar2;
  return iVar2 <= iVar1;
}

