/* Entry 0x088FC2DC | file offset 0x000F92B4 | FUN_088fc2dc | bytes 136 */

void FUN_088fc2dc(int param_1)

{
  uint *puVar1;
  
  puVar1 = *(uint **)(param_1 + 0x30);
  if ((*puVar1 & 2) != 0) {
    FUN_088d3f00(puVar1 + 0x197,puVar1 + 0x297,&DAT_089cce9c);
    FUN_088fba24(param_1);
    FUN_088fbcc0(param_1);
    FUN_088fbe60(param_1);
    puVar1 = *(uint **)(param_1 + 0x30);
  }
  if ((*puVar1 & 1) != 0) {
    FUN_088d3f00(puVar1 + 0x197,puVar1 + 0x297,&DAT_089cce28);
  }
  return;
}

