/* Entry 0x08833C18 | file offset 0x00030BF0 | FUN_08833c18 | bytes 128 */

void FUN_08833c18(float param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_2 + 0x388);
  *(undefined4 *)(param_2 + 0x38c) = *(undefined4 *)(param_2 + 0x38c);
  *(uint *)(param_2 + 0x388) = uVar1 | 4;
  if ((uVar1 & 0x20) != 0) {
    FUN_08831ea8(param_2,(int)((float)(int)*(short *)(param_2 + 0x53e) * param_1),1);
  }
  return;
}

