#ifndef GEOMETRIES_HPP
#define GEOMETRIES_HPP

namescape students {

class BonhommeDeNeige : public HierarchicalRenderable {
public:
  ~BonhommeDeNeige();
  BonhommeDeNeige();
  BonhommeDeNeige(ShaderProgramPtr program);

protected:
  void do_draw();
  void do_animate(float time);

private:
  std::vector<glm::vec3> m_positions;

};

}

#endif
