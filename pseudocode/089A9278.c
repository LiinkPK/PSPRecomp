/* Entry 0x089A9278 | file offset 0x001A6250 | FUN_089a9278 | bytes 76 */

void FUN_089a9278(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = -1;
  if (*(code **)((int)param_1 + 0x14) != (code *)0x0) {
    lVar1 = (**(code **)((int)param_1 + 0x14))((int)param_1[1]);
  }
  if (-1 < lVar1) {
    *param_1 = lVar1;
  }
  return;
}

