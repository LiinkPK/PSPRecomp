/* Entry 0x08837990 | file offset 0x00034968 | FUN_08837990 | bytes 40 */

bool FUN_08837990(int param_1)

{
  return (*(uint *)(param_1 + 0x388) & 0x10000) != 0;
}

