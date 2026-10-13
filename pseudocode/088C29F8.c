/* Entry 0x088C29F8 | file offset 0x000BF9D0 | FUN_088c29f8 | bytes 80 */

bool FUN_088c29f8(int *param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_088b2b8c(param_2 + 0x11950);
  *param_1 = iVar1;
  iVar2 = *param_3;
  param_1[1] = iVar2;
  return iVar2 <= iVar1;
}

