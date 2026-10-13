/* Entry 0x088C3D30 | file offset 0x000C0D08 | FUN_088c3d30 | bytes 68 */

bool FUN_088c3d30(int *param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_088f27e4();
  *param_1 = iVar1;
  iVar2 = *param_3;
  param_1[1] = iVar2;
  return iVar2 <= iVar1;
}

