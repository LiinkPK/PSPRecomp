/* Entry 0x088C3C70 | file offset 0x000C0C48 | FUN_088c3c70 | bytes 68 */

bool FUN_088c3c70(int *param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_088f1d7c();
  *param_1 = iVar1;
  iVar2 = *param_3;
  param_1[1] = iVar2;
  return iVar2 <= iVar1;
}

