/* Entry 0x0893047C | file offset 0x0012D454 | FUN_0893047c | bytes 324 */

void FUN_0893047c(float param_1,int *param_2)

{
  int iVar1;
  undefined1 auStack_a0 [52];
  float local_6c;
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [52];
  float local_1c;
  
  iVar1 = *param_2;
  if (iVar1 < 2) {
    if (0 < iVar1) {
      FUN_088da0a8(param_2[2],param_2[0x14],auStack_a0,auStack_60);
      FUN_088d9b84(param_2[3],auStack_a0);
      FUN_088d9af4(param_2[3],auStack_60);
      FUN_088d3f00(0,param_2 + 3,param_2 + 7);
      FUN_088d44ec(param_2 + 3,param_2 + 0x11,&DAT_089cf1a0);
    }
  }
  else if (iVar1 < 3) {
    FUN_088da0a8(param_2[2],param_2[0x14],auStack_a0,auStack_60);
    FUN_088da0a8(param_2[2],param_2[0x16],auStack_50,auStack_60);
    local_6c = (1.0 - param_1) * local_6c + param_1 * local_1c;
    FUN_088d9b84(param_2[3],auStack_a0);
    FUN_088d9af4(param_2[3],auStack_60);
    FUN_088d3f00(0,param_2 + 3,param_2 + 7);
    FUN_088d44ec(param_2 + 3,param_2 + 0x11,&DAT_089cf1a0);
  }
  return;
}

