/* Entry 0x08837E50 | file offset 0x00034E28 | FUN_08837e50 | bytes 140 */

void FUN_08837e50(undefined4 param_1,int param_2,undefined4 param_3)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)FUN_0884e3ac(param_3);
  if ((*(uint *)(param_2 + 900) & 0x80) != 0) {
    fVar1 = (float)FUN_0884e3ac(param_3);
  }
  fVar2 = (float)FUN_089a4500(param_1);
  FUN_089a2c68((fVar2 * 2.0) / fVar1);
  return;
}

