/* Entry 0x089A1F04 | file offset 0x0019EEDC | FUN_089a1f04 | bytes 260 */

void FUN_089a1f04(int param_1,int param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  uint *puVar2;
  
  switch(param_3) {
  default:
    return;
  case 1:
    iVar1 = param_2 * 3 + 0x8f;
    break;
  case 2:
    iVar1 = param_2 * 3 + 0x90;
    break;
  case 3:
    puVar2 = *(uint **)(param_1 + 8);
    *puVar2 = (param_2 * 3 + 0x8f) * 0x1000000 | param_4 & 0xffffff;
    *(uint **)(param_1 + 8) = puVar2 + 2;
    puVar2[1] = (param_2 * 3 + 0x90) * 0x1000000 | param_4 & 0xffffff;
    return;
  case 4:
    iVar1 = param_2 * 3 + 0x91;
    break;
  case 6:
    puVar2 = *(uint **)(param_1 + 8);
    *puVar2 = (param_2 * 3 + 0x90) * 0x1000000 | param_4 & 0xffffff;
    *(uint **)(param_1 + 8) = puVar2 + 2;
    puVar2[1] = (param_2 * 3 + 0x91) * 0x1000000 | param_4 & 0xffffff;
    return;
  }
  puVar2 = *(uint **)(param_1 + 8);
  *puVar2 = iVar1 << 0x18 | param_4 & 0xffffff;
  *(uint **)(param_1 + 8) = puVar2 + 1;
  return;
}

