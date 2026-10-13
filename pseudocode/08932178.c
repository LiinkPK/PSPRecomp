/* Entry 0x08932178 | file offset 0x0012F150 | FUN_08932178 | bytes 108 */

void FUN_08932178(int param_1)

{
  undefined1 auStack_50 [64];
  undefined1 auStack_10 [4];
  
  FUN_088da0a8(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),auStack_50,auStack_10);
  FUN_088d9b84(*(undefined4 *)(param_1 + 0x10),auStack_50);
  FUN_088d9af4(*(undefined4 *)(param_1 + 0x10),auStack_10);
  FUN_088d3f00(0,param_1 + 0x10,&DAT_089cf2d8);
  return;
}

