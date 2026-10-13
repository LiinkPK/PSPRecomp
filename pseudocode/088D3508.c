/* Entry 0x088D3508 | file offset 0x000D04E0 | FUN_088d3508 | bytes 80 */

undefined4 FUN_088d3508(uint param_1)

{
  undefined4 uVar1;
  
  if (param_1 < 3) {
    FUN_088a24d4(0,*(undefined4 *)(&DAT_089cbe50 + param_1 * 4),1,0);
    uVar1 = 0;
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

