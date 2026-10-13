/* Entry 0x088AD20C | file offset 0x000AA1E4 | FUN_088ad20c | bytes 164 */

void FUN_088ad20c(int param_1,undefined4 param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0xef8);
  if ((uVar1 & 0x10100) == 0) {
    if ((uVar1 & 0x1000) == 0) {
      *(uint *)(param_1 + 0xef8) = uVar1 | 0x1000;
    }
    else {
      if (*(int *)(param_1 + 0xee4) != 0) {
        FUN_0899bb1c();
        *(undefined4 *)(param_1 + 0xee4) = 0;
      }
      FUN_088822b4(param_2);
      *(undefined4 *)(param_1 + 0xf04) = 0;
      *(uint *)(param_1 + 0xef8) = *(uint *)(param_1 + 0xef8) & 0xffffefff;
    }
  }
  else {
    FUN_088ad2b0(param_1);
    *(int *)(param_1 + 0xee8) = *(int *)(param_1 + 0xee8) + 1;
  }
  return;
}

