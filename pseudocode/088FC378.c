/* Entry 0x088FC378 | file offset 0x000F9350 | FUN_088fc378 | bytes 76 */

void FUN_088fc378(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x30) + param_2 * 0x1c;
  *(ushort *)(iVar1 + 0x1c) = *(ushort *)(iVar1 + 0x1c) & 0xfffd;
  FUN_088fc684(param_1,(int)*(short *)(*(int *)(param_1 + 0x30) + param_2 * 0x1c + 0x1e),2);
  return;
}

