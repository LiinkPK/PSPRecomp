/* Entry 0x089B2DBC | file offset 0x001AFD94 | FUN_089b2dbc | bytes 20 */

void FUN_089b2dbc(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)*param_1;
  *param_1 = puVar1 + 1;
  *puVar1 = 0;
  return;
}

