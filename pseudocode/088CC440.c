/* Entry 0x088CC440 | file offset 0x000C9418 | FUN_088cc440 | bytes 124 */

void FUN_088cc440(int param_1)

{
  ushort uVar1;
  uint *puVar2;
  
  if (DAT_089d7808 != 0) {
    if ((param_1 < 0) || ((int)(uint)*(ushort *)(DAT_089d7808 + 2) <= param_1)) {
      param_1 = 0;
    }
    uVar1 = *(ushort *)(DAT_089d780c + param_1 * 8 + 4);
    if (uVar1 != 0xffff) {
      puVar2 = (uint *)(DAT_089d726c + (uint)(uVar1 >> 5) * 4);
      *puVar2 = *puVar2 | 1 << (uVar1 & 0x1f);
    }
  }
  return;
}

