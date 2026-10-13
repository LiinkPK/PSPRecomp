/* Entry 0x088C4148 | file offset 0x000C1120 | FUN_088c4148 | bytes 88 */

bool FUN_088c4148(int *param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0892044c(DAT_089d712c + 0x3f548);
  *param_1 = iVar1;
  iVar2 = *param_3;
  param_1[1] = iVar2;
  return iVar2 <= iVar1;
}

