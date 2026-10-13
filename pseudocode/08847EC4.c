/* Entry 0x08847EC4 | file offset 0x00044E9C | FUN_08847ec4 | bytes 76 */

bool FUN_08847ec4(float param_1,int param_2)

{
  return (*(byte *)(param_2 + 0xf) & 0x20) == 0 || 0.0 <= param_1;
}

