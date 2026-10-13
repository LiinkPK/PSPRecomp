/* Entry 0x089BF818 | file offset 0x001BC7F0 | FUN_089bf818 | bytes 48 */

bool FUN_089bf818(int *param_1,uint param_2)

{
  bool bVar1;
  
  bVar1 = false;
  if ((param_1 != (int *)0x0) && (0xf < param_2)) {
    bVar1 = *param_1 == 0x324d4954;
  }
  return bVar1;
}

