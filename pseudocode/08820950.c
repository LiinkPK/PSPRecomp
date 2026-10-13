/* Entry 0x08820950 | file offset 0x0001D928 | FUN_08820950 | bytes 196 */

undefined4 FUN_08820950(char *param_1,char param_2)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if (*param_1 == '\0') {
    uVar1 = 0xffffffff;
  }
  else {
    if (param_1[0x1c] != param_2) {
      fVar4 = *(float *)(param_1 + 0x20);
      fVar3 = *(float *)(param_1 + 0x24);
      if (param_2 == '\x01') {
        fVar2 = (float)FUN_08820c74(param_1);
      }
      else {
        fVar2 = (float)FUN_08820c98(param_1);
      }
      if (fVar2 <= 0.0) {
        return 0xfffffffe;
      }
      param_1[0x1c] = param_2;
      *(float *)(param_1 + 0x24) = fVar2;
      *(float *)(param_1 + 0x20) = fVar2 * (1.0 - fVar4 / fVar3);
    }
    uVar1 = 0;
  }
  return uVar1;
}

