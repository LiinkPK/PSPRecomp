/* Entry 0x088C3A20 | file offset 0x000C09F8 | FUN_088c3a20 | bytes 76 */

bool FUN_088c3a20(int *param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_088b91c8(param_2 + 0xe788);
  *param_1 = iVar1;
  iVar2 = *param_3;
  param_1[1] = iVar2;
  return iVar2 <= iVar1;
}

