/* Entry 0x089A0144 | file offset 0x0019D11C | FUN_089a0144 | bytes 60 */

undefined4 FUN_089a0144(int *param_1)

{
  if (param_1 != (int *)0x0) {
    *param_1 = *(int *)(DAT_09af6830 + 0xc) -
               (*(int *)(DAT_09af6830 + 8) - *(int *)(DAT_09af6830 + 4));
  }
  return *(undefined4 *)(DAT_09af6830 + 8);
}

