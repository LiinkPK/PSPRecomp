/* Entry 0x089985B0 | file offset 0x00195588 | FUN_089985b0 | bytes 68 */

undefined8 FUN_089985b0(uint param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0x20 - param_3;
  uVar3 = param_1;
  if (param_3 != 0) {
    uVar1 = param_2 << (param_3 & 0x1f);
    uVar3 = 0;
    param_2 = param_1 << (-uVar2 & 0x1f);
    if (0 < (int)uVar2) {
      uVar3 = param_1 << (param_3 & 0x1f);
      param_2 = uVar1 | param_1 >> (uVar2 & 0x1f);
    }
  }
  return CONCAT44(param_2,uVar3);
}

