/* Entry 0x088AD504 | file offset 0x000AA4DC | FUN_088ad504 | bytes 32 */

void FUN_088ad504(int param_1)

{
  *(uint *)(param_1 + 0xef8) = *(uint *)(param_1 + 0xef8) & 0xfffefeff;
  return;
}

