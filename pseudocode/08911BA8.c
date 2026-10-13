/* Entry 0x08911BA8 | file offset 0x0010EB80 | FUN_08911ba8 | bytes 180 */

void FUN_08911ba8(undefined4 *param_1)

{
  int iVar1;
  float local_20;
  float local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  iVar1 = param_1[1];
  local_20 = *(float *)(iVar1 + 0x100);
  local_18 = *(undefined4 *)(iVar1 + 0x108);
  local_14 = *(undefined4 *)(iVar1 + 0x10c);
  local_1c = *(float *)(iVar1 + 0x104) + (float)param_1[2];
  iVar1 = FUN_08866e04(&local_20,&local_20);
  if (iVar1 == 0) {
    FUN_088d9cfc(*param_1);
  }
  else {
    FUN_088d9cd8();
    FUN_088d9c60(*param_1,(int)local_20,(int)local_1c);
  }
  return;
}

