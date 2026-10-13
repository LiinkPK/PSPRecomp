/* Entry 0x088D4B74 | file offset 0x000D1B4C | FUN_088d4b74 | bytes 128 */

void FUN_088d4b74(int param_1,char param_2)

{
  undefined1 auStack_50 [48];
  float local_20;
  float local_1c;
  undefined1 auStack_10 [4];
  
  if (*(int *)(param_1 + 4) != 0) {
    FUN_088da0a8(*(undefined4 *)(param_1 + 8),*(undefined2 *)(param_1 + 0xc),auStack_50,auStack_10);
    if (param_2 == '\0') {
      local_1c = local_1c + (float)*(int *)(param_1 + 0x18);
    }
    else {
      local_20 = local_20 + (float)*(int *)(param_1 + 0x18);
    }
    FUN_088d9b84(*(undefined4 *)(param_1 + 4),auStack_50);
  }
  return;
}

