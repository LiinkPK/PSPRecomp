/* Entry 0x088C41A0 | file offset 0x000C1178 | FUN_088c41a0 | bytes 88 */

bool FUN_088c41a0(int *param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_089204a4(DAT_089d712c + 0x3f548);
  *param_1 = iVar1;
  iVar2 = *param_3;
  param_1[1] = iVar2;
  return iVar2 <= iVar1;
}

