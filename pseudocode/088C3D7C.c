/* Entry 0x088C3D7C | file offset 0x000C0D54 | FUN_088c3d7c | bytes 116 */

bool FUN_088c3d7c(int *param_1,int param_2,int *param_3)

{
  int iVar1;
  int local_20;
  int local_1c;
  
  FUN_088b95e8(&local_20,&local_1c,param_2 + 0xe788);
  local_1c = (local_20 * 100) / local_1c;
  *param_1 = local_1c;
  iVar1 = *param_3;
  param_1[1] = iVar1;
  return iVar1 <= local_1c;
}

