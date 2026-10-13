/* Entry 0x08872540 | file offset 0x0006F518 | FUN_08872540 | bytes 84 */

void FUN_08872540(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *(uint *)((int)param_1 + 0x44) = *(uint *)((int)param_1 + 0x44) & 0xfffffffe;
  FUN_08871b40(param_1,0xfffffffe,0,0);
  uVar1 = FUN_088726b0(param_1);
  *param_1 = uVar1;
  return;
}

