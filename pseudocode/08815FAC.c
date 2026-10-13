/* Entry 0x08815FAC | file offset 0x00012F84 | FUN_08815fac | bytes 224 */

void FUN_08815fac(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_08837990();
  if ((iVar1 != 1) && ((*(uint *)(param_1 + 0x560) & 4) == 0)) {
    uVar2 = (*(uint *)(param_1 + 0x560) & 0xf0) >> 4 ^ 8;
    if ((uVar2 == 10) || ((uVar2 == 9 && (0.0 < *(float *)(*(int *)(param_1 + 0x568) + 0x28))))) {
      FUN_088226bc(param_1 + 0x570);
      FUN_08818070(param_1 + 0x5b0);
    }
    else if (uVar2 == 9) {
      uVar3 = FUN_08838300(param_1);
      FUN_08822458(uVar3,param_1 + 0x570);
      FUN_08822800(param_1 + 0x570);
      FUN_08818070(param_1 + 0x5b0);
    }
  }
  return;
}

