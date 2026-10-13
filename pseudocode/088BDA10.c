/* Entry 0x088BDA10 | file offset 0x000BA9E8 | FUN_088bda10 | bytes 72 */

void FUN_088bda10(void)

{
  if (DAT_089d73d8 != 0) {
    (**(code **)(*(int *)(DAT_089d73d8 + 0x24) + 0x1c))
              (DAT_089d73d8 + *(short *)(*(int *)(DAT_089d73d8 + 0x24) + 0x18));
    DAT_089d73d8 = 0;
  }
  return;
}

