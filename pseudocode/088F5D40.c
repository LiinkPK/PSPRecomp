/* Entry 0x088F5D40 | file offset 0x000F2D18 | FUN_088f5d40 | bytes 140 */

int FUN_088f5d40(void)

{
  undefined1 auStack_20 [2];
  ushort local_1e;
  ushort local_1c;
  ushort local_1a;
  ushort local_18;
  ushort local_16;
  
  sceRtcGetCurrentClockLocalTime(auStack_20);
  return (uint)local_16 + (uint)local_18 * 100 + (uint)local_1a * 10000 + (uint)local_1c * 1000000 +
         (uint)local_1e * 100000000;
}

