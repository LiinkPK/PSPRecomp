/* Entry 0x089B2DD0 | file offset 0x001AFDA8 | FUN_089b2dd0 | bytes 24 */

void FUN_089b2dd0(undefined4 *param_1,uint param_2)

{
  uint *puVar1;
  
  puVar1 = (uint *)*param_1;
  *param_1 = puVar1 + 1;
  *puVar1 = param_2 & 0xffffff;
  return;
}

