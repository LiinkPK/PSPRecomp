/* Entry 0x088ED26C | file offset 0x000EA244 | FUN_088ed26c | bytes 84 */

undefined4 FUN_088ed26c(void)

{
  undefined4 uVar1;
  
  if (DAT_089d7f00 == 0) {
    uVar1 = 0;
  }
  else {
    if ((*(uint *)(DAT_089d7f00 + 0x140) & 0x20) != 0) {
      *(uint *)(DAT_089d7f00 + 0x140) = *(uint *)(DAT_089d7f00 + 0x140) ^ 0x20;
    }
    uVar1 = 1;
  }
  return uVar1;
}

