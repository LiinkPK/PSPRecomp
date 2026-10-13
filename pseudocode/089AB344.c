/* Entry 0x089AB344 | file offset 0x001A831C | FUN_089ab344 | bytes 40 */

void FUN_089ab344(undefined1 *param_1,undefined1 *param_2,int param_3)

{
  undefined1 uVar1;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    uVar1 = *param_2;
    param_2 = param_2 + 1;
    *param_1 = uVar1;
    param_1 = param_1 + 1;
  }
  return;
}

