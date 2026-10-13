/* Entry 0x0893F9D4 | file offset 0x0013C9AC | FUN_0893f9d4 | bytes 156 */

uint FUN_0893f9d4(undefined4 *param_1)

{
  ushort uVar1;
  uint uVar2;
  ushort *puVar3;
  ushort *puVar4;
  
  puVar3 = (ushort *)*param_1;
  uVar2 = (uint)*puVar3;
  puVar4 = puVar3 + 1;
  if ((uVar2 < 0xd800) || (0xdbff < uVar2)) {
    if ((0xdbff < uVar2) && (uVar2 < 0xe000)) {
      uVar2 = DAT_089d9130;
    }
  }
  else {
    uVar1 = *puVar4;
    puVar4 = puVar3 + 2;
    uVar2 = DAT_089d9130;
    if ((0xdbff < uVar1) && (uVar1 < 0xe000)) {
      uVar2 = CONCAT22(*puVar3,uVar1);
    }
  }
  *param_1 = puVar4;
  return uVar2;
}

