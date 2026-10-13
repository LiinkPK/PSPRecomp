/* Entry 0x089C0A6C | file offset 0x001BDA44 | FUN_089c0a6c | bytes 40 */

bool FUN_089c0a6c(short *param_1,int param_2)

{
  bool bVar1;
  
  bVar1 = false;
  if ((param_1 != (short *)0x0) && (0x35 < param_2)) {
    bVar1 = *param_1 == 0x4d42;
  }
  return bVar1;
}

